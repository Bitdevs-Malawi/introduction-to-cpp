#include<iostream>
using namespace std;

struct Transactions {
    string txns0[1] = {"txid00"};
    string txns1[3] = {"txid10", "txid12", "txid13"};
    string txns2[3] = {"txid20", "txid22", "txid23"};
    string txns3[3] = {"txid30", "txid32", "txid33"};
    string txns4[3] = {"txid40", "txid42", "txid43"};
};

struct BlockHeader {
    Transactions tx;
    string previousBlockHash;
    string hash;
    string previousHash;
    string timestamp;
    int size;
    int weight;
    float health;
    float feeSpan;
    float medianFee;
    float totalFees;
    float subsidyPlusFees;
    string miner;
    string version;
    string bits;
    string merkleRoot;
    float difficulty;
    int nonce;
    string blockHeaderHex;
};

int main(){
//Declaring 5 blocks 
    BlockHeader block_0;
    BlockHeader block_1;
    BlockHeader block_2;
    BlockHeader block_3;
    BlockHeader block_4;

//Appending values to the block genesis block 
    block_0.hash = "0000000000000000000a16b1c9e8f8e8e8e8e8e8e8e8e8e8e8e8e8e8e8e";
    block_0.timestamp = "2024-06-01 12:00:00";
    block_0.size = 1234567;
    block_0.weight = 4000000;
    block_0.health = 0.95;
    block_0.feeSpan = 0.0001;
    block_0.medianFee = 0.00005;
    block_0.totalFees = 0.00015;
    block_0.subsidyPlusFees = 6.25 + 0.00015;
    block_0.miner = "Richard";
    block_0.version = "0x20000000";
    block_0.bits = "1d00ffff";
    block_0.difficulty = 1.0;
    block_0.nonce = 123456789;
    block_0.blockHeaderHex = "00000020...";
    block_0.tx.txns0[0] = "txid00";

//apending values to the block 1
    block_1.hash = "0000000000000000000b16c1d9e8f8e8e8e8e8e8e8e8e8e8e8e8e8e8f";
    block_1.previousHash = block_0.hash;
    block_1.timestamp = "2024-06-01 12:10:00    ";
    block_1.size = 2345678;         
    block_1.weight = 4000000;
    block_1.health = 0.90;
    block_1.feeSpan = 0.0002;
    block_1.medianFee = 0.0001;
    block_1.totalFees = 0.0003;
    block_1.subsidyPlusFees = 6.25 + 0.0003;
    block_1.miner = "Sylos";
    block_1.version = "0x20000000";
    block_1.bits = "1d00ffff";
    block_1.merkleRoot = "5e6f7g8h9i";
    block_1.difficulty = 1.0;
    block_1.nonce = 987654321;
    block_1.blockHeaderHex = "00000020...";
    block_1.tx.txns1[0] = "txid10";
    block_1.tx.txns1[1] = "txid12";
    block_1.tx.txns1[2] = "txid13";

//appending values to the block 2
    block_2.hash = "0000000000000000000c16d1e9e8f8e8e8e8e8e8e8e8e8e8e8e8e8e90";
    block_2.previousHash = block_1.hash;
    block_2.timestamp = "2024-06-01 12:20:00";
    block_2.size = 3456789;
    block_2.weight = 4000000;
    block_2.health = 0.85;
    block_2.feeSpan = 0.0003;
    block_2.medianFee = 0.00015;
    block_2.totalFees = 0.00045;
    block_2.subsidyPlusFees = 6.25 + 0.00045;
    block_2.miner = "Esther";
    block_2.version = "0x20000000";
    block_2.bits = "1d00ffff";
    block_2.merkleRoot = "6f7g8h9i0j";
    block_2.difficulty = 1.0;   
    block_2.nonce = 192837465;
    block_2.blockHeaderHex = "00000020...";
    block_2.tx.txns2[0] = "txid20";
    block_2.tx.txns2[1] = "txid22";
    block_2.tx.txns2[2] = "txid23";

//appending values to the block 3    
    block_3.hash = "0000000000000000000d16e1f9e8f8e8e8e8e8e8e8e8e8e8e8e8e8e91";
    block_3.previousHash = block_2.hash;
    block_3.timestamp = "2024-06-01 12:30:00";
    block_3.size = 4567890;
    block_3.weight = 4000000;
    block_3.health = 0.80;
    block_3.feeSpan = 0.0004;
    block_3.medianFee = 0.0002;
    block_3.totalFees = 0.0006;
    block_3.subsidyPlusFees = 6.25 + 0.0006;
    block_3.miner = "Victory";
    block_3.version = "0x20000000";
    block_3.bits = "1d00ffff";
    block_3.merkleRoot = "7g8h9i0j1k";
    block_3.difficulty = 1.0;
    block_3.nonce = 283746591;
    block_3.blockHeaderHex = "00000020...";
    block_3.tx.txns3[0] = "txid30";
    block_3.tx.txns3[1] = "txid32";
    block_3.tx.txns3[2] = "txid33";

//appending values to the block 4
    block_4.hash = "0000000000000000000e16f1g9e8f8e8e8e8e8e8e8e8e8e8e8e8e8e92";
    block_4.previousHash = block_3.hash;
    block_4.timestamp = "2024-06-01 12:40:00";
    block_4.size = 5678901; 
    block_4.weight = 4000000;
    block_4.health = 0.75;
    block_4.feeSpan = 0.0005;
    block_4.medianFee = 0.00025;
    block_4.totalFees = 0.00075;
    block_4.subsidyPlusFees = 6.25 + 0.00075;
    block_4.miner = "Ulemu";
    block_4.version = "0x20000000";
    block_4.bits = "1d00ffff";
    block_4.merkleRoot = "8h9i0j1k2l";
    block_4.difficulty = 1.0;   
    block_4.nonce = 374659182;
    block_4.blockHeaderHex = "00000020...";
    block_4.tx.txns4[0] = "txid40";
    block_4.tx.txns4[1] = "txid42";
    block_4.tx.txns4[2] = "txid43";

//printing the block headers and transactions
    cout << "==============  Block 0  =============" << "\n\n";
    cout << "Block Hash: " << block_0.hash << endl;
    cout << "Timestamp: " << block_0.timestamp << endl;
    cout << "Size: " << block_0.size << endl;
    cout << "Weight: " << block_0.weight << endl;
    cout << "Health: " << block_0.health << endl;
    cout << "Fee Span: " << block_0.feeSpan << endl;
    cout << "Median Fee: " << block_0.medianFee << endl;
    cout << "Total Fees: " << block_0.totalFees << endl;
    cout << "Subsidy + Fees: " << block_0.subsidyPlusFees << endl;
    cout << "Miner: " << block_0.miner << endl;
    cout << "Version: " << block_0.version << endl;
    cout << "Bits: " << block_0.bits << endl;
    cout << "Difficulty: " << block_0.difficulty << endl;
    cout << "Nonce: " << block_0.nonce << endl;
    cout << "Block Header Hex: " << block_0.blockHeaderHex << "\n\n";

    cout << "============= 1 Transactions =============" << endl;
    cout << "Transaction id : " << block_0.tx.txns0[0] << "\n\n";
    cout << "*********************************************************" << endl;

    cout<<"==============  Block 1  =============" << "\n\n";
    cout << "Block Hash: " << block_1.hash << endl;
    cout << "Previous Block Hash: " << block_1.previousHash << endl;
    cout << "Timestamp: " << block_1.timestamp << endl;     
    cout << "Size: " << block_1.size << endl;
    cout << "Weight: " << block_1.weight << endl;
    cout << "Health: " << block_1.health << endl;
    cout << "Fee Span: " << block_1.feeSpan << endl;
    cout << "Median Fee: " << block_1.medianFee << endl;    
    cout << "Total Fees: " << block_1.totalFees << endl;
    cout << "Subsidy + Fees: " << block_1.subsidyPlusFees << endl;
    cout << "Miner: " << block_1.miner << endl;
    cout << "Version: " << block_1.version << endl;
    cout << "Bits: " << block_1.bits << endl;
    cout << "Merkle Root: " << block_1.merkleRoot << endl;
    cout << "Difficulty: " << block_1.difficulty << endl;
    cout << "Nonce: " << block_1.nonce << endl;
    cout << "Block Header Hex: " << block_1.blockHeaderHex << "\n\n";   

    cout << "============= 3 Transactions =============" << endl;
    cout << "Transaction id : " << block_2.tx.txns1[0] << endl;
    cout << "Transaction id : " << block_2.tx.txns1[1] << endl;
    cout << "Transaction id : " << block_2.tx.txns1[2] << "\n\n";
    cout << "******************************************************" << endl;

    cout <<"==============  Block 2  =============" << "\n\n";
    cout << "Block Hash: " << block_2.hash << endl; 
    cout << "Previous Block Hash: " << block_2.previousHash << endl;
    cout << "Timestamp: " << block_2.timestamp << endl;
    cout << "Size: " << block_2.size << endl;
    cout << "Weight: " << block_2.weight << endl;
    cout << "Health: " << block_2.health << endl;
    cout << "Fee Span: " << block_2.feeSpan << endl;
    cout << "Median Fee: " << block_2.medianFee << endl;
    cout << "Total Fees: " << block_2.totalFees << endl;
    cout << "Subsidy + Fees: " << block_2.subsidyPlusFees << endl;
    cout << "Miner: " << block_2.miner << endl; 
    cout << "Version: " << block_2.version << endl;
    cout << "Bits: " << block_2.bits << endl;
    cout << "Merkle Root: " << block_2.merkleRoot << endl;
    cout << "Difficulty: " << block_2.difficulty << endl;
    cout << "Nonce: " << block_2.nonce << endl;
    cout << "Block Header Hex: " << block_2.blockHeaderHex << "\n\n";   

    cout << "============= 3 Transactions =============" << endl;
    cout << "Transaction id : " << block_2.tx.txns2[0] << endl;
    cout << "Transaction id : " << block_2.tx.txns2[1] << endl;
    cout << "Transaction id : " << block_2.tx.txns2[2] << "\n\n";
    cout << "******************************************************" << endl;

    cout <<"==============  Block 3  =============" << "\n\n";
    cout << "Block Hash: " << block_3.hash << endl; 
    cout << "Previous Block Hash: " << block_3.previousHash << endl;
    cout << "Timestamp: " << block_3.timestamp << endl;
    cout << "Size: " << block_3.size << endl;
    cout << "Weight: " << block_3.weight << endl;
    cout << "Health: " << block_3.health << endl;
    cout << "Fee Span: " << block_3.feeSpan << endl;
    cout << "Median Fee: " << block_3.medianFee << endl;
    cout << "Total Fees: " << block_3.totalFees << endl;
    cout << "Subsidy + Fees: " << block_3.subsidyPlusFees << endl;
    cout << "Miner: " << block_3.miner << endl;
    cout << "Version: " << block_3.version << endl;
    cout << "Bits: " << block_3.bits << endl;
    cout << "Merkle Root: " << block_3.merkleRoot << endl;
    cout << "Difficulty: " << block_3.difficulty << endl;
    cout << "Nonce: " << block_3.nonce << endl;
    cout << "Block Header Hex: " << block_3.blockHeaderHex << "\n\n";
    cout << "============= 3 Transactions =============" << endl;
    cout << "Transaction id : " << block_3.tx.txns3[0] << endl;
    cout << "Transaction id : " << block_3.tx.txns3[1] << endl;
    cout << "Transaction id : " << block_3.tx.txns3[2] << "\n\n";
    cout << "********************************************************" << endl;

    cout <<"==============  Block 4  =============" << "\n\n";
    cout << "Block Hash: " << block_4.hash << endl;  
    cout << "Previous Block Hash: " << block_4.previousHash << endl;   
    cout << "Timestamp: " << block_4.timestamp << endl;
    cout << "Size: " << block_4.size << endl;
    cout << "Weight: " << block_4.weight << endl;
    cout << "Health: " << block_4.health << endl;
    cout << "Fee Span: " << block_4.feeSpan << endl;
    cout << "Median Fee: " << block_4.medianFee << endl;
    cout << "Total Fees: " << block_4.totalFees << endl;
    cout << "Subsidy + Fees: " << block_4.subsidyPlusFees << endl;
    cout << "Miner: " << block_4.miner << endl;
    cout << "Version: " << block_4.version << endl;
    cout << "Bits: " << block_4.bits << endl;
    cout << "Merkle Root: " << block_4.merkleRoot << endl;
    cout << "Difficulty: " << block_4.difficulty << endl;
    cout << "Nonce: " << block_4.nonce << endl; 
    cout << "Block Header Hex: " << block_4.blockHeaderHex << "\n\n";

    cout << "============= 3 Transactions =============" << endl;
    cout << "Transaction id : " << block_4.tx.txns4[0] << endl;
    cout << "Transaction id : " << block_4.tx.txns4[1] << endl;
    cout << "Transaction id : " << block_4.tx.txns4[2] << "\n\n";


return 0;
}