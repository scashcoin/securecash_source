This is the reference code for [secure cash (scsx)](http://scashcoin.com) cryptocurrency.

## Secure Cash (SCSX) Cryptocurrency

- Name: Secure Cash
- Coin Abbreviation: SCSX
- Algorithm: CryptoNight
- Maximum Supply: 300,000 SCSX
- PoW Hashing Algo: CryptoNight-Lite V1 (Variant 1)
- Difficulty algorithm: Zawy V2
- Difficulty Target: 120 Seconds
- Emission speed factor: 21
- Minimun transaction fee: 0.00000100
- Pre-mining: 15%
- P2P Port: 21000
- RPC Port: 21001

## How to compile

### Compile on Linux Ubuntu 16

**1. Install dependencies**

- run an update

``
sudo apt-get update
``

- get all dependencies

``
git clone https://github.com/scashcoin/dependencies.git
``

``
bash install_dependencies.sh
``

**2. Get the coin**

``
git clone https://github.com/scashcoin/securecash_source.git
``

**3. Build**

 Before:
 
 ``
chmod +x external/rocksdb/build_tools/build_detect_platform
``

``
chmod +x external/rocksdb/build_tools/version.sh
``

 After:

``
Make
``



### Credits
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Developers
