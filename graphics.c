
// Define the VideoCard structure
typedef struct {
    volatile char* video_memory;
    unsigned char character_null;
    unsigned char character_startheading;
    unsigned char character_starttext;
    unsigned char character_endtext;
    unsigned char character_endoftransmission;
    unsigned char character_enquiry;
    unsigned char character_acknowledge;
    unsigned char character_belloralert;
    unsigned char character_backspace;
    unsigned char character_horizontalTab;
    unsigned char character_lineFeed;
    unsigned char character_verticalTabulation;
    unsigned char character_formFeed;
    unsigned char character_carriageReturn;
    unsigned char character_shiftOut;
    unsigned char character_shiftIn;
    unsigned char character_dataLinkEscape;
    unsigned char character_XON;
    unsigned char character_deviceControlTwo;
    unsigned char character_XOFF;
    unsigned char character_deviceControlFour;
    unsigned char character_negativeAcknowledge;
    unsigned char character_syncIdle;
    unsigned char character_endTransmissionBlock;
    unsigned char character_cancel;
    unsigned char character_endMedium;
    unsigned char character_substitute;
    unsigned char character_escape;
    unsigned char character_fileSeparator;
    unsigned char character_groupSeparator;
    unsigned char character_recordSeperator;
    unsigned char character_unitSeperator;
    unsigned char character_space;
    unsigned char character_exclamationMark;
    unsigned char character_doubleQoute;
    unsigned char character_numberSign;
    unsigned char character_dollarSign;
    unsigned char character_percentSign;
    unsigned char character_ampersand;
    unsigned char character_singleQoute;
    unsigned char character_openbracket;
    unsigned char character_closeBracket;
    unsigned char character_asterisk;
    unsigned char character_plus;
    unsigned char character_comma;
    unsigned char character_hyphenMinus;
    unsigned char character_period;
    unsigned char character_slashOrDivide;
    unsigned char character_zero;
    unsigned char character_one;
    unsigned char character_two;
    unsigned char character_three;
    unsigned char character_four;
    unsigned char character_five;
    unsigned char character_six;
    unsigned char character_seven;
    unsigned char character_eight;
    unsigned char character_nine;
    unsigned char character_colon;
    unsigned char character_semicolon;
    unsigned char character_lessThan;
    unsigned char character_equals;
    unsigned char character_greaterThan;
    unsigned char character_questionMark;
    unsigned char character_atSign;
    unsigned char character_upA;
    unsigned char character_upB;
    unsigned char character_upC;
    unsigned char character_upD;
    unsigned char character_upE;
    unsigned char character_upF;
    unsigned char character_upG;
    unsigned char character_upH;
    unsigned char character_upI;
    unsigned char character_upJ;
    unsigned char character_upK;
    unsigned char character_upL;
    unsigned char character_upM;
    unsigned char character_upN;
    unsigned char character_upO;
    unsigned char character_upP;
    unsigned char character_upQ;
    unsigned char character_upR;
    unsigned char character_upS;
    unsigned char character_upT;
    unsigned char character_upU;
    unsigned char character_upV;
    unsigned char character_upW;
    unsigned char character_upX;
    unsigned char character_upY;
    unsigned char character_upZ;
    unsigned char character_openSquareBracket;
    unsigned char character_backSlash;
    unsigned char character_clsoingSquareBracket;
    unsigned char character_caret;
    unsigned char character_underScore;
    unsigned char character_graveAccent;
    unsigned char character_a;
    unsigned char character_b;
    unsigned char character_c;
    unsigned char character_d;
    unsigned char character_e;
    unsigned char character_f;
    unsigned char character_g;
    unsigned char character_h;
    unsigned char character_i;
    unsigned char character_j;
    unsigned char character_k;
    unsigned char character_l;
    unsigned char character_m;
    unsigned char character_n;
    unsigned char character_o;
    unsigned char character_p;
    unsigned char character_q;
    unsigned char character_r;
    unsigned char character_s;
    unsigned char character_t;
    unsigned char character_u;
    unsigned char character_v;
    unsigned char character_w;
    unsigned char character_x;
    unsigned char character_y;
    unsigned char character_z;
    unsigned char character_openCurlyBracket;
    unsigned char character_verticalBar;
    unsigned char character_closeCurlyBracket;
    unsigned char character_tilde;
    unsigned char character_DEL;

} VideoCard;

// Initialize a VideoCard instance with appropriate ASCII values
void initializeVideoCard(VideoCard* vc) {
    vc->video_memory = (volatile char*)0xb8000;

    // Control Characters
    vc->character_null = 0x00;
    vc->character_startheading = 0x01; // Start of Heading
    vc->character_starttext = 0x02;    // Start of Text
    vc->character_endtext = 0x03;      // End of Text
    vc->character_endoftransmission = 0x04; // End of Transmission
    vc->character_enquiry = 0x05;      // Enquiry
    vc->character_acknowledge = 0x06;  // Acknowledge
    vc->character_belloralert = 0x07;  // Bell (Alert)
    vc->character_backspace = 0x08;    // Backspace
    vc->character_horizontalTab = 0x09; // Horizontal Tab
    vc->character_lineFeed = 0x0A;     // Line Feed
    vc->character_verticalTabulation = 0x0B; // Vertical Tabulation
    vc->character_formFeed = 0x0C;     // Form Feed
    vc->character_carriageReturn = 0x0D; // Carriage Return
    vc->character_shiftOut = 0x0E;     // Shift Out
    vc->character_shiftIn = 0x0F;      // Shift In
    vc->character_dataLinkEscape = 0x10; // Data Link Escape
    vc->character_XON = 0x11;          // XON (Transmit Enable)
    vc->character_deviceControlTwo = 0x12; // Device Control 2
    vc->character_XOFF = 0x13;         // XOFF (Transmit Disable)
    vc->character_deviceControlFour = 0x14; // Device Control 4
    vc->character_negativeAcknowledge = 0x15; // Negative Acknowledge
    vc->character_syncIdle = 0x16;     // Synchronization Idle
    vc->character_endTransmissionBlock = 0x17; // End of Transmission Block
    vc->character_cancel = 0x18;       // Cancel
    vc->character_endMedium = 0x19;    // End of Medium
    vc->character_substitute = 0x1A;   // Substitute
    vc->character_escape = 0x1B;       // Escape
    vc->character_fileSeparator = 0x1C; // File Separator
    vc->character_groupSeparator = 0x1D; // Group Separator
    vc->character_recordSeperator = 0x1E; // Record Separator
    vc->character_unitSeperator = 0x1F; // Unit Separator

    // Printable Characters
    vc->character_space = 0x20;        // Space
    vc->character_exclamationMark = 0x21; // !
    vc->character_doubleQoute = 0x22;  // "
    vc->character_numberSign = 0x23;   // #
    vc->character_dollarSign = 0x24;   // $
    vc->character_percentSign = 0x25;  // %
    vc->character_ampersand = 0x26;    // &
    vc->character_singleQoute = 0x27;  // '
    vc->character_openbracket = 0x28;  // (
    vc->character_closeBracket = 0x29; // )
    vc->character_asterisk = 0x2A;     // *
    vc->character_plus = 0x2B;         // +
    vc->character_comma = 0x2C;        // ,
    vc->character_hyphenMinus = 0x2D;  // -
    vc->character_period = 0x2E;       // .
    vc->character_slashOrDivide = 0x2F; // /

    vc->character_zero = 0x30;         // 0
    vc->character_one = 0x31;          // 1
    vc->character_two = 0x32;          // 2
    vc->character_three = 0x33;        // 3
    vc->character_four = 0x34;         // 4
    vc->character_five = 0x35;         // 5
    vc->character_six = 0x36;          // 6
    vc->character_seven = 0x37;        // 7
    vc->character_eight = 0x38;        // 8
    vc->character_nine = 0x39;         // 9

    vc->character_colon = 0x3A;        // :
    vc->character_semicolon = 0x3B;    // ;
    vc->character_lessThan = 0x3C;     // <
    vc->character_equals = 0x3D;       // =
    vc->character_greaterThan = 0x3E;  // >
    vc->character_questionMark = 0x3F; // ?
    vc->character_atSign = 0x40;       // @

    vc->character_upA = 0x41;          // A
    vc->character_upB = 0x42;          // B
    vc->character_upC = 0x43;          // C
    vc->character_upD = 0x44;          // D
    vc->character_upE = 0x45;          // E
    vc->character_upF = 0x46;          // F
    vc->character_upG = 0x47;          // G
    vc->character_upH = 0x48;          // H
    vc->character_upI = 0x49;          // I
    vc->character_upJ = 0x4A;          // J
    vc->character_upK = 0x4B;          // K
    vc->character_upL = 0x4C;          // L
    vc->character_upM = 0x4D;          // M
    vc->character_upN = 0x4E;          // N
    vc->character_upO = 0x4F;          // O
    vc->character_upP = 0x50;          // P
    vc->character_upQ = 0x51;          // Q
    vc->character_upR = 0x52;          // R
    vc->character_upS = 0x53;          // S
    vc->character_upT = 0x54;          // T
    vc->character_upU = 0x55;          // U
    vc->character_upV = 0x56;          // V
    vc->character_upW = 0x57;          // W
    vc->character_upX = 0x58;          // X
    vc->character_upY = 0x59;          // Y
    vc->character_upZ = 0x5A;          // Z

    vc->character_openSquareBracket = 0x5B; // [
    vc->character_backSlash = 0x5C;       // \
    vc->character_clsoingSquareBracket = 0x5D; // ]
    vc->character_caret = 0x5E;            // ^
    vc->character_underScore = 0x5F;      // _
    vc->character_graveAccent = 0x60;      // `

    vc->character_a = 0x61;          // a
    vc->character_b = 0x62;          // b
    vc->character_c = 0x63;          // c
    vc->character_d = 0x64;          // d
    vc->character_e = 0x65;          // e
    vc->character_f = 0x66;          // f
    vc->character_g = 0x67;          // g
    vc->character_h = 0x68;          // h
    vc->character_i = 0x69;          // i
    vc->character_j = 0x6A;          // j
    vc->character_k = 0x6B;          // k
    vc->character_l = 0x6C;          // l
    vc->character_m = 0x6D;          // m
    vc->character_n = 0x6E;          // n
    vc->character_o = 0x6F;          // o
    vc->character_p = 0x70;          // p
    vc->character_q = 0x71;          // q
    vc->character_r = 0x72;          // r
    vc->character_s = 0x73;          // s
    vc->character_t = 0x74;          // t
    vc->character_u = 0x75;          // u
    vc->character_v = 0x76;          // v
    vc->character_w = 0x77;          // w
    vc->character_x = 0x78;          // x
    vc->character_y = 0x79;          // y
    vc->character_z = 0x7A;          // z

    vc->character_openCurlyBracket = 0x7B; // {
    vc->character_verticalBar = 0x7C;     // |
    vc->character_closeCurlyBracket = 0x7D; // }
    vc->character_tilde = 0x7E;           // ~
    vc->character_DEL = 0x7F;             // DEL
}

void putchar(unsigned char fart, VideoCard* vc, int colour) {
    vc->video_memory[0] = fart;
    vc->video_memory[1] = colour;
}

// Main driver function
void VideoCardDriver_main() {
    VideoCard vc;
    initializeVideoCard(&vc);
    putchar(vc.character_eight, &vc, 0x1);


}
