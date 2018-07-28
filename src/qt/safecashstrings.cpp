

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *safecash_strings[] = {
QT_TRANSLATE_NOOP("safecash-official", "SafeCash Official"),
QT_TRANSLATE_NOOP("safecash-official", "The %s developers"),
QT_TRANSLATE_NOOP("safecash-official", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("safecash-official", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Add a node to connect to and attempt to keep the connection open (see the "
"`addnode` RPC command help for more info)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Bind to given address to listen for JSON-RPC connections. This option is "
"ignored unless -rpcallowip is also passed. Port is optional and overrides -"
"rpcport. Use [host]:port notation for IPv6. This option can be specified "
"multiple times (default: 127.0.0.1 and ::1 i.e., localhost, or if -"
"rpcallowip has been specified, 0.0.0.0 and :: i.e., all addresses)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Connect only to the specified node(s); -connect=0 disables automatic "
"connections (the rules for this peer are the same as for -addnode)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Equivalent bytes per sigop in transactions for relay and mining (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Error loading %s: You can't enable HD on an already existing non-HD wallet"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Error loading wallet %s. -wallet parameter must only specify a filename (not "
"a path)."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Exclude debugging information for a category. Can be used in conjunction "
"with -debug=1 to output debug logs for all categories except one or more "
"specified categories."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Extra transactions to keep in memory for compact block reconstructions "
"(default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Force relay of transactions from whitelisted peers even if they violate "
"local relay policy (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("safecash-official", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Maximum allowed median peer time offset adjustment. Local perspective of "
"time may be influenced by peers forward or backward by this amount. "
"(default: %u seconds)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Maximum total fees (in %s) to use in a single wallet transaction or raw "
"transaction; setting this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect used)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Reduce storage requirements by enabling pruning (deleting) of old blocks. "
"This allows the pruneblockchain RPC to be called to delete specific blocks, "
"and enables automatic pruning of old blocks if a target size in MiB is "
"provided. This mode is incompatible with -txindex and -rescan. Warning: "
"Reverting this setting requires re-downloading the entire blockchain. "
"(default: 0 = disable pruning blocks, 1 = allow manual pruning via RPC, >%u "
"= automatically prune block files to stay under the specified target size in "
"MiB)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Set lowest fee rate (in %s/kB) for transactions to be included in block "
"creation. (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Set maximum BIP141 block weight to this * 4. Deprecated, use blockmaxweight"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Sets the serialization of raw transaction or block hex returned in non-"
"verbose mode, non-segwit(0) or segwit(1) (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Specify directory to hold wallets (default: <datadir>/wallets if it exists, "
"otherwise <datadir>)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Specify location of debug log file: this can be an absolute path or a path "
"relative to the data directory (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("safecash-official", ""
"The fee rate (in %s/kB) that indicates your tolerance for discarding change "
"by adding it to the fee (default: %s). Note: An output is discarded if it is "
"dust at this rate, but we will always discard up to the dust relay fee and a "
"discard fee above that is limited by the fee estimate for the longest target"),
QT_TRANSLATE_NOOP("safecash-official", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("safecash-official", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("safecash-official", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("safecash-official", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("safecash-official", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. The client then connects normally using the "
"rpcuser=<USERNAME>/rpcpassword=<PASSWORD> pair of arguments. This option can "
"be specified multiple times"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Wallet will not create transactions that violate mempool chain limits "
"(default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Whether to save the mempool on shutdown and load on restart (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", ""
"Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) or CIDR "
"notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
QT_TRANSLATE_NOOP("safecash-official", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("safecash-official", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("safecash-official", "%d of last 100 blocks have unexpected version"),
QT_TRANSLATE_NOOP("safecash-official", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("safecash-official", "%s is set very high!"),
QT_TRANSLATE_NOOP("safecash-official", "(default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", "(default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("safecash-official", "<category> can be:"),
QT_TRANSLATE_NOOP("safecash-official", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("safecash-official", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("safecash-official", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("safecash-official", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("safecash-official", "Attempt to recover private keys from a corrupt wallet on startup"),
QT_TRANSLATE_NOOP("safecash-official", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", "Block creation options:"),
QT_TRANSLATE_NOOP("safecash-official", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("safecash-official", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Chain selection options:"),
QT_TRANSLATE_NOOP("safecash-official", "Change index out of range"),
QT_TRANSLATE_NOOP("safecash-official", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("safecash-official", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("safecash-official", "Connection options:"),
QT_TRANSLATE_NOOP("safecash-official", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("safecash-official", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("safecash-official", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("safecash-official", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("safecash-official", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("safecash-official", "Done loading"),
QT_TRANSLATE_NOOP("safecash-official", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("safecash-official", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("safecash-official", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("safecash-official", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("safecash-official", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Error creating %s: You can't create non-HD wallets with this version."),
QT_TRANSLATE_NOOP("safecash-official", "Error initializing block database"),
QT_TRANSLATE_NOOP("safecash-official", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("safecash-official", "Error loading %s"),
QT_TRANSLATE_NOOP("safecash-official", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("safecash-official", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("safecash-official", "Error loading %s: You can't disable HD on an already existing HD wallet"),
QT_TRANSLATE_NOOP("safecash-official", "Error loading block database"),
QT_TRANSLATE_NOOP("safecash-official", "Error loading wallet %s. -wallet filename must be a regular file."),
QT_TRANSLATE_NOOP("safecash-official", "Error loading wallet %s. Duplicate -wallet filename specified."),
QT_TRANSLATE_NOOP("safecash-official", "Error loading wallet %s. Invalid characters in -wallet filename."),
QT_TRANSLATE_NOOP("safecash-official", "Error opening block database"),
QT_TRANSLATE_NOOP("safecash-official", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("safecash-official", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("safecash-official", "Error"),
QT_TRANSLATE_NOOP("safecash-official", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("safecash-official", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("safecash-official", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("safecash-official", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("safecash-official", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("safecash-official", "Importing..."),
QT_TRANSLATE_NOOP("safecash-official", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("safecash-official", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("safecash-official", "Information"),
QT_TRANSLATE_NOOP("safecash-official", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("safecash-official", "Insufficient funds"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("safecash-official", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("safecash-official", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Loading P2P addresses..."),
QT_TRANSLATE_NOOP("safecash-official", "Loading banlist..."),
QT_TRANSLATE_NOOP("safecash-official", "Loading block index..."),
QT_TRANSLATE_NOOP("safecash-official", "Loading wallet..."),
QT_TRANSLATE_NOOP("safecash-official", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("safecash-official", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("safecash-official", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Node relay options:"),
QT_TRANSLATE_NOOP("safecash-official", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("safecash-official", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("safecash-official", "Options:"),
QT_TRANSLATE_NOOP("safecash-official", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("safecash-official", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Print this help message and exit"),
QT_TRANSLATE_NOOP("safecash-official", "Print version and exit"),
QT_TRANSLATE_NOOP("safecash-official", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("safecash-official", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("safecash-official", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("safecash-official", "RPC server options:"),
QT_TRANSLATE_NOOP("safecash-official", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("safecash-official", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("safecash-official", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("safecash-official", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Replaying blocks..."),
QT_TRANSLATE_NOOP("safecash-official", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("safecash-official", "Rescanning..."),
QT_TRANSLATE_NOOP("safecash-official", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("safecash-official", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("safecash-official", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("safecash-official", "Send transactions with full-RBF opt-in enabled (RPC only, default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Set maximum BIP141 block weight (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("safecash-official", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("safecash-official", "Signing transaction failed"),
QT_TRANSLATE_NOOP("safecash-official", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("safecash-official", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("safecash-official", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("safecash-official", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("safecash-official", "Specify data directory"),
QT_TRANSLATE_NOOP("safecash-official", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("safecash-official", "Specify your own public address"),
QT_TRANSLATE_NOOP("safecash-official", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Starting network threads..."),
QT_TRANSLATE_NOOP("safecash-official", "The source code is available from %s."),
QT_TRANSLATE_NOOP("safecash-official", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("safecash-official", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("safecash-official", "This is experimental software."),
QT_TRANSLATE_NOOP("safecash-official", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("safecash-official", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("safecash-official", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("safecash-official", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction amount too small"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction fee and change calculation failed"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("safecash-official", "Transaction too large"),
QT_TRANSLATE_NOOP("safecash-official", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("safecash-official", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("safecash-official", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("safecash-official", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("safecash-official", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("safecash-official", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("safecash-official", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("safecash-official", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("safecash-official", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("safecash-official", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("safecash-official", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("safecash-official", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "Use the test chain"),
QT_TRANSLATE_NOOP("safecash-official", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("safecash-official", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("safecash-official", "Verifying blocks..."),
QT_TRANSLATE_NOOP("safecash-official", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("safecash-official", "Wallet %s resides outside wallet directory %s"),
QT_TRANSLATE_NOOP("safecash-official", "Wallet debugging/testing options:"),
QT_TRANSLATE_NOOP("safecash-official", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("safecash-official", "Wallet options:"),
QT_TRANSLATE_NOOP("safecash-official", "Warning"),
QT_TRANSLATE_NOOP("safecash-official", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("safecash-official", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("safecash-official", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("safecash-official", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("safecash-official", "ZeroMQ notification options:"),
};
