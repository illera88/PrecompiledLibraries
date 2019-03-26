Version: `libssh-0.8.7` (Modified with this patch: `https://github.com/illera88/libssh_mod`) 

Compiled statically with `musl` on `Alpine x86_64 Linux`

Flags and commands used for the compilation:

```
docker pull alpine:latest
docker run -v ~/xxx/:/shared --name alpine_instance -t -i alpine:latest /bin/sh
apk add --no-cache build-base cmake autoconf libtool pkgconf git mercurial file linux-headers
wget https://www.openssl.org/source/openssl-1.1.0j.tar.gz
tar xf openssl-1.1.0j.tar.gz
cd openssl-1.1.0j && ./config -fPIC && make && make install
# clone or patch modified version...
cd ~/libssh-0.8.7/build/
cmake -DWITH_GSSAPI=OFF -DWITH_ZLIB=OFF -DWITH_SFTP=OFF -DWITH_STATIC_LIB=ON -DWITH_PCAP=OFF -DWITH_NACL=OFF -DCMAKE_BUILD_TYPE=Release .. && make
```
