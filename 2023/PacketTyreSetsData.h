struct PacketTyreSetsData
{
    PacketHeader    m_header;            // Header

    uint8           m_carIdx;            // Index of the car this data relates to

    TyreSetData     m_tyreSetData[20];	// 13 (dry) + 7 (wet)

    uint8           m_fittedIdx;         // Index into array of fitted tyre
};
