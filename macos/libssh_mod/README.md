Version: `libssh-0.8.7` (Modified with this patch: `https://github.com/illera88/libssh_mod`) 
Compiled statically with:
```
cmake -DOPENSSL_ROOT_DIR=/usr/local/opt/openssl/ -DWITH_GSSAPI=OFF -DWITH_ZLIB=OFF -DWITH_SFTP=OFF -DWITH_STATIC_LIB=ON -DWITH_PCAP=OFF -DWITH_NACL=OFF -DCMAKE_BUILD_TYPE=Release .. && make
```
