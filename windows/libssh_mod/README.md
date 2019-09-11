This is the libssh code from https://github.com/cedral/libssh

Which required suspending on read or write block. So I added external send, recv, and close functions. You do this by calling

`void ssh_socket_set_io_callbacks(ssh_socket s, ssh_socket_io_callbacks io_callbacks);`

