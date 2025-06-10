#include <databento/dbn.hpp>
#include <databento/enums.hpp>
#include <databento/live.hpp>
#include <databento/log.hpp>

int main(int argc, char* argv[])
{
    std::cout << "First Try \n";
     // 1. Argument Parsing (API Key, Dataset, Symbols)
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " <API_KEY> <DATASET> <SYMBOLS> [SCHEMA]" << std::endl;
        std::cerr << "Example: " << argv[0] << " YOUR_API_KEY GLBX.MDP3 book,trades ES.M,NQ.M" << std::endl;
        return 1;
    }

    const std::string api_key = argv[1];
    const std::string dataset = argv[2];
    const std::string symbols_str = argv[3]; // Comma-separated symbols
    const std::string schema_str = (argc > 4) ? argv[4] : "trades"; // Default to trades
    // auto client = HistoricalBuilder{}.SetKey("db-8qcnDj783AVbVNGAsgCNcgrE53jJi").Build();
    // TsSymbolMap symbol_map;

    // auto decode_symbols = [&symbol_map](const Metadata& metadata) {
    //     symbol_map = metadata.CreateSymbolMap();
    // };

    // auto print_trades = [&symbol_map](const Record& record) {
    //     const auto& trade_msg = record.Get<TradeMsg>();
    //     std::cout << "Received trade for " << symbol_map.At(trade_msg) << ": "
    //           << trade_msg << '\n';
    //     return KeepGoing::Continue;
    // };
    // client.TimeseriesGetRange(
    //     "GLBX.MDP3", {"2022-06-10T14:30", "2022-06-10T14:40"}, kAllSymbols,
    //     Schema::Trades, SType::RawSymbol, SType::InstrumentId, {}, decode_symbols,
    //     print_trades);
    return 0;
}