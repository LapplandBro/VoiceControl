
#define MAXPLAYERS 65

#define LEVEL_QUIETER -3500
#define LEVEL_QUIET -2500
#define LEVEL_LOUD 1000
#define LEVEL_LOUDER 2500
#define MAX_LEVELS 4

// Opus max packet duration is 120ms; at 48kHz that is 5760 samples/channel.
// Steam voice is commonly 20ms @ 24/48kHz (480/960); keep headroom for larger frames.
#define MAX_FRAMEBUFFER_SAMPLES 5760
#define STEAM_HEADER_SIZE 12
#define CRC_SIZE 4
#define CHANNELS 1
#define APPLICATION OPUS_APPLICATION_AUDIO
#define BITRATE 32000
#define MAX_FRAME_SIZE 6 * 960
#define MAX_PACKET_SIZE 4096