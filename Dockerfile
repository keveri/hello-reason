FROM ocaml/opam:alpine

RUN sudo apk update
RUN sudo apk add m4

RUN opam update -uy
RUN opam install reason
RUN opam install re

WORKDIR /src
