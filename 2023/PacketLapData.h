struct PacketLapData
{
    PacketHeader    m_header;              // Header

    LapData         m_lapData[22];         // Lap data for all cars on track

    uint8	m_timeTrialPBCarIdx; 	// Index of Personal Best car in time trial (255 if invalid)
    uint8	m_timeTrialRivalCarIdx; 	// Index of Rival car in time trial (255 if invalid)
};
