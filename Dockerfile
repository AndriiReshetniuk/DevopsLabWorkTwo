FROM alpine:latest AS temporary
RUN apk add --no-cache git build-base libstdc++ libc6-compat autoconf automake

WORKDIR /home/lab4
RUN git clone --branch branchHTTPserver  https://github.com/AndriiReshetniuk/DevopsLabWorkTwo.git .

RUN aclocal
RUN automake --add-missing
RUN autoconf
RUN ./configure
RUN make

FROM alpine:latest
RUN apk add --no-cache libstdc++ libc6-compat
COPY --from=temporary /home/lab4/Calculation /home/lab4/Calculation
WORKDIR /home/lab4
ENTRYPOINT ["./Calculation"]
