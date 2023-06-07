struct PacketFinalClassificationData
{
    PacketHeader    m_header;                      // Header

    uint8                      m_numCars;          // Number of cars in the final classification
    FinalClassificationData    m_classificationData[22];
};
