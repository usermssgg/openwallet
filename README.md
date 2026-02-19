# 🪙 OpenWallet — Simple Educational Blockchain

A minimal, easy-to-understand implementation of a blockchain with proof-of-work and digital signatures. This project is designed purely for **learning purposes** to demonstrate core concepts like blocks, transactions, mining, and wallet security.

> **Disclaimer**: This is **not a real cryptocurrency** and should never be used in production. It lacks critical features like peer-to-peer networking, proper consensus mechanisms, and advanced security audits.

## 🔧 Core Features

- **Blocks & Chains**: Immutable ledger structure with SHA256 hashing.
- **Proof-of-Work (PoW)**: Basic mining algorithm with adjustable difficulty.
- **Digital Signatures**: Uses ECDSA (`secp256k1`) to validate transaction ownership.
- **Wallet Balances**: Tracks account balances by iterating through the entire chain.
- **Transaction Validation**: Prevents double-spending and invalid transfers.

## 📂 Project Structure

- `/src/blockchain.js` — The main implementation of the `Blockchain`, `Block`, and `Transaction` classes.
- `/tests/` — Unit tests covering core logic, validation, and edge cases.
- `package.json` — Lists dependencies (`elliptic`, `debug`) and test scripts.

## 🚀 Getting Started

1.  **Clone the repo**
    ```bash
    git clone https://github.com/usermssgg/openwallet.git
    cd openwallet
    ```

2.  **Install dependencies**
    ```bash
    npm install
    ```

3.  **Run the tests**
    ```bash
    npm test
    ```

## ⚖️ License & Purpose

This project is licensed under the **MIT License**. It is provided "as is" for **educational and research purposes only**. The author is not responsible for any misuse or financial loss.

For a deeper understanding of how this works, check out the original tutorial by [Savjee](https://www.savjee.be/).