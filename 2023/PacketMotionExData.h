struct PacketMotionExData
{
    PacketHeader    m_header;               	// Header

    // Extra player car ONLY data
    float         m_suspensionPosition[4];       // Note: All wheel arrays have the following order:
    float         m_suspensionVelocity[4];       // RL, RR, FL, FR
    float         m_suspensionAcceleration[4];	// RL, RR, FL, FR
    float         m_wheelSpeed[4];           	// Speed of each wheel
    float         m_wheelSlipRatio[4];           // Slip ratio for each wheel
    float         m_wheelSlipAngle[4];           // Slip angles for each wheel
    float         m_wheelLatForce[4];            // Lateral forces for each wheel
    float         m_wheelLongForce[4];           // Longitudinal forces for each wheel
    float         m_heightOfCOGAboveGround;      // Height of centre of gravity above ground    
    float         m_localVelocityX;         	// Velocity in local space – metres/s
    float         m_localVelocityY;         	// Velocity in local space
    float         m_localVelocityZ;         	// Velocity in local space
    float         m_angularVelocityX;		// Angular velocity x-component – radians/s
    float         m_angularVelocityY;            // Angular velocity y-component
    float         m_angularVelocityZ;            // Angular velocity z-component
    float         m_angularAccelerationX;        // Angular acceleration x-component – radians/s/s
    float         m_angularAccelerationY;	// Angular acceleration y-component
    float         m_angularAccelerationZ;        // Angular acceleration z-component
    float         m_frontWheelsAngle;            // Current front wheels angle in radians
    float         m_wheelVertForce[4];           // Vertical forces for each wheel
};
