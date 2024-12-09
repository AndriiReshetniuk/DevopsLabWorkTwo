FROM alpine
WORKDIR /home/lab4
COPY ./Calculation .
RUN apk add libstdc++
RUN apk add libc6-compat
ENTRYPOINT ["./Calculation"]
