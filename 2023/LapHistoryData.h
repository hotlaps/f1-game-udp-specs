struct LapHistoryData
{
    uint32    m_lapTimeInMS;           // Lap time in milliseconds
    uint16    m_sector1TimeInMS;       // Sector 1 time in milliseconds
    uint8     m_sector1TimeMinutes;    // Sector 1 whole minute part
    uint16    m_sector2TimeInMS;       // Sector 2 time in milliseconds
    uint8     m_sector2TimeMinutes;    // Sector 2 whole minute part
    uint16    m_sector3TimeInMS;       // Sector 3 time in milliseconds
    uint8     m_sector3TimeMinutes;    // Sector 3 whole minute part
    uint8     m_lapValidBitFlags;      // 0x01 bit set-lap valid,      0x02 bit set-sector 1 valid
                                       // 0x04 bit set-sector 2 valid, 0x08 bit set-sector 3 valid
};
