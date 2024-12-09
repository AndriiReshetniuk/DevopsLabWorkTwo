FROM alpine AS build
RUN apk add --no-cache build-base automake autoconf
WORKDIR /home/lab4
COPY . .
RUN ./configure
RUN make

FROM alpine
COPY --from=build /home/lab4/Calculation /usr/local/bin/Calculation
ENTRYPOINT ["/usr/local/bin/Calculation"]

