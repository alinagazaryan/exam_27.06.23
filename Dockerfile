FROM ubuntu
LABEL maintainer= "Alina Gazaryan"
RUN apt-get update && \
    apt-get install -y gcc
COPY ./ MyProj_221_332_Gazaryan
WORKDIR /MyProj_221_332_Gazaryan
RUN gcc -o my_Program main.c
CMD ["./my_Program"]
