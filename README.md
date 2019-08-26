# FORT

An RPKI Validator and RTR Server.

## Installation

Dependencies:

1. libcrypto ([LibreSSL](http://www.libressl.org/) or [OpenSSL](https://www.openssl.org/) >= 1.1)
2. [jansson](https://github.com/akheron/jansson)
3. [rsync](http://rsync.samba.org/)

The validator is currently supported in *64-bit* OS. A 32-bit OS may face the [Year 2038 problem](https://en.wikipedia.org/wiki/Year_2038_problem) when handling dates at certificates.

After all the dependencies are installed, run:

```
./autogen.sh
./configure
make
make install
```

More documentation at [https://nicmx.github.io/FORT-validator/](https://nicmx.github.io/FORT-validator/).

## Usage

```
fort \
	--tal <path to your TAL files> \
	--local-repository <path where you want to keep your local cache> \
	--server.address <your intended RTR server address> \
	--server.port <your intended RTR server port>
```

An RTR server will serve the ROAs resulting from a validation rooted at the trust anchors defined by the TALs contained at directory `--tal`.
