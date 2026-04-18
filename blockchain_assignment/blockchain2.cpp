#include<iostream>
#include<vector>
using namespace std;

// Holds all transaction lists for all blocks
struct Transactions {
    vector<vector <string>>txns {
        {"txid00"},
        {"txid10","txid12","txid13"},
        {"txid20","txid22","txid23"},
        {"txid30","txid32","txid33"},
        {"txid40","txid42","txid43"},
    };
};

// Holds all block header data in a table-like structure
struct BlockHeaderData {
    vector<string>  hash           = {"0000...a","0000...b","0000...c","0000...d","0000...e"};
    vector<string>  previousHash   = {"",        "0000...a","0000...b","0000...c","0000...d"};
    vector<string>  timestamp      = {"2024-06-01 12:00:00","2024-06-01 12:10:00","2024-06-01 12:20:00","2024-06-01 12:30:00","2024-06-01 12:40:00"};
    vector<int>     size           = {1234567, 2345678, 3456789, 4567890, 5678901};
    vector<int>     weight         = {4000000, 4000000, 4000000, 4000000, 4000000};
    vector<float>   health         = {0.95, 0.90, 0.85, 0.80, 0.75};
    vector<float>   feeSpan        = {0.0001, 0.0002, 0.0003, 0.0004, 0.0005};
    vector<float>   medianFee      = {0.00005, 0.0001, 0.00015, 0.0002, 0.00025};
    vector<float>   totalFees      = {0.00015, 0.0003, 0.00045, 0.0006, 0.00075};
    vector<float>   subsidyFees    = {6.25+0.00015, 6.25+0.0003, 6.25+0.00045, 6.25+0.0006, 6.25+0.00075};
    vector<string>  miner          = {"Richard","Sylos","Esther","Victory","Ulemu"};
    vector<string>  version        = {"0x20000000","0x20000000","0x20000000","0x20000000","0x20000000"};
    vector<string>  bits           = {"1d00ffff","1d00ffff","1d00ffff","1d00ffff","1d00ffff"};
    vector<string>  merkleRoot     = {"","5e6f7g8h9i","6f7g8h9i0j","7g8h9i0j1k","8h9i0j1k2l"};
    vector<float>   difficulty     = {1.0, 1.0, 1.0, 1.0, 1.0};
    vector<int>     nonce          = {123456789, 987654321, 192837465, 283746591, 374659182};
    vector<string>  blockHeaderHex = {"00000020...","00000020...","00000020...","00000020...","00000020..."};
};

struct BlockHeaderFields {
    BlockHeaderData data;
    Transactions tx;
};

int main(){
    BlockHeaderFields block;
    int numBlocks = block.data.hash.size();

    for(int i = 0; i < numBlocks; i++){
        cout << "==============  Block " << i << "  =============\n\n";
        cout << "Block Hash: "       << block.data.hash[i]          << "\n";
        if(i > 0)
        cout << "Previous Hash: "    << block.data.previousHash[i]  << "\n";
        cout << "Timestamp: "        << block.data.timestamp[i]     << "\n";
        cout << "Size: "             << block.data.size[i]          << "\n";
        cout << "Weight: "           << block.data.weight[i]        << "\n";
        cout << "Health: "           << block.data.health[i]        << "\n";
        cout << "Fee Span: "         << block.data.feeSpan[i]       << "\n";
        cout << "Median Fee: "       << block.data.medianFee[i]     << "\n";
        cout << "Total Fees: "       << block.data.totalFees[i]     << "\n";
        cout << "Subsidy + Fees: "   << block.data.subsidyFees[i]   << "\n";
        cout << "Miner: "            << block.data.miner[i]         << "\n";
        cout << "Version: "          << block.data.version[i]       << "\n";
        cout << "Bits: "             << block.data.bits[i]          << "\n";
        if(!block.data.merkleRoot[i].empty())
        cout << "Merkle Root: "      << block.data.merkleRoot[i]    << "\n";
        cout << "Difficulty: "       << block.data.difficulty[i]    << "\n";
        cout << "Nonce: "            << block.data.nonce[i]         << "\n";
        cout << "Block Header Hex: " << block.data.blockHeaderHex[i]<< "\n\n";

        cout << "============= " << block.tx.txns[i].size() << " Transaction(s) =============\n";
        for(const string& txid : block.tx.txns[i])
            cout << "Transaction id: " << txid << "\n";
        cout << "\n********************************************************\n\n";
    }

    return 0;
}