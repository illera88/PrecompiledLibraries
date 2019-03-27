Version: `libssh-0.8.7`
Compiled statically with:
```
wget https://www.libssh.org/files/0.8/libssh-0.8.7.tar.xz && tar xf libssh-0.8.7.tar.xz
cd libssh-0.8.7
# Patch to avoid build path leakage
sed -i -e 's/__FILE__/"misc.c"/' src/misc.c
mkdir build && cd build
cmake -DOPENSSL_ROOT_DIR=/usr/local/opt/openssl/ -DWITH_GSSAPI=OFF -DWITH_ZLIB=OFF -DWITH_SFTP=OFF -DWITH_STATIC_LIB=ON -DWITH_PCAP=OFF -DWITH_NACL=OFF -DCMAKE_BUILD_TYPE=Release .. && make
```
