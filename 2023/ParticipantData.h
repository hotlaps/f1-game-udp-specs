struct ParticipantData
{
    uint8      m_aiControlled;      // Whether the vehicle is AI (1) or Human (0) controlled
    uint8      m_driverId;	   // Driver id - see appendix, 255 if network human
    uint8      m_networkId;	   // Network id – unique identifier for network players
    uint8      m_teamId;            // Team id - see appendix
    uint8      m_myTeam;            // My team flag – 1 = My Team, 0 = otherwise
    uint8      m_raceNumber;        // Race number of the car
    uint8      m_nationality;       // Nationality of the driver
    char       m_name[48];          // Name of participant in UTF-8 format – null terminated
				   // Will be truncated with … (U+2026) if too long
    uint8      m_yourTelemetry;     // The player's UDP setting, 0 = restricted, 1 = public
    uint8      m_showOnlineNames;   // The player's show online names setting, 0 = off, 1 = on
    uint8      m_platform;          // 1 = Steam, 3 = PlayStation, 4 = Xbox, 6 = Origin, 255 = unknown
};
