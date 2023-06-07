struct TyreSetData
{
    uint8     m_actualTyreCompound;    // Actual tyre compound used
    uint8     m_visualTyreCompound;    // Visual tyre compound used
    uint8     m_wear;                  // Tyre wear (percentage)
    uint8     m_available;             // Whether this set is currently available
    uint8     m_recommendedSession;    // Recommended session for tyre set
    uint8     m_lifeSpan;              // Laps left in this tyre set
    uint8     m_usableLife;            // Max number of laps recommended for this compound
    int16     m_lapDeltaTime;          // Lap delta time in milliseconds compared to fitted set
    uint8     m_fitted;                // Whether the set is fitted or not
};
