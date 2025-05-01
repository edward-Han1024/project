FROM ubuntu:latest
WORKDIR /project
COPY . /project
RUN apt-get update;
RUN apt-get install -y automake autoconf libtool make g++ gcc;
CMD ["sh", "-c", "./bootstrap ; ./configure -C ; make -s ; make -s check"]
