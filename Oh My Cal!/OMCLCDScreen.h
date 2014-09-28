///:
/*****************************************************************************
 **                                                                         **
 **                               .======.                                  **
 **                               | INRI |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                      .========'      '========.                         **
 **                      |   _      xxxx      _   |                         **
 **                      |  /_;-.__ / _\  _.-;_\  |                         **
 **                      |     `-._`'`_/'`.-'     |                         **
 **                      '========.`\   /`========'                         **
 **                               | |  / |                                  **
 **                               |/-.(  |                                  **
 **                               |\_._\ |                                  **
 **                               | \ \`;|                                  **
 **                               |  > |/|                                  **
 **                               | / // |                                  **
 **                               | |//  |                                  **
 **                               | \(\  |                                  **
 **                               |  ``  |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                   \\    _  _\\| \//  |//_   _ \// _                     **
 **                  ^ `^`^ ^`` `^ ^` ``^^`  `^^` `^ `^                     **
 **                                                                         **
 **                       Copyright (c) 2014 Tong G.                        **
 **                          ALL RIGHTS RESERVED.                           **
 **                                                                         **
 ****************************************************************************/

#import <Cocoa/Cocoa.h>

@class OMFPanelBackgroundView;

@class OMCCalculation;
@class OMCBasicStyleCalculation;
@class OMCScientificStyleCalculation;
@class OMCProgrammerStyleCalculation;

@class OMCCalWithBasicStyle;
@class OMCCalWithProgrammerStyle;

typedef NSRect OMCSpaceBarRect;

// OMCLCDScreen class
@interface OMCLCDScreen : BGHUDView
    {
@private
    OMCSpaceBarRect _bottommostSpaceBar;
    OMCSpaceBarRect _secondSpaceBar;
    OMCSpaceBarRect _thirdSpaceBar;
    OMCSpaceBarRect _topmostSpaceBar;
    OMCSpaceBarRect _statusSpaceBar;

    NSBezierPath* _auxiliaryLinePath;
    NSBezierPath* _gridPath;

    NSColor* _gridColor;
    NSColor* _auxiliaryLineColor;
    NSColor* _operandsColor;
    NSColor* _operatorsColor;
    NSColor* _storageFormulasColor;
    NSColor* _statusColor;

    NSFont* _operandsFont;
    NSFont* _operatorsFont;
    NSFont* _storageFormulasFont;
    NSFont* _statusFont;

    OMCTypingState _typingState;

    OMCCalculation* _currentCalculation;
    }

@property ( nonatomic, assign ) IBOutlet OMFPanelBackgroundView* _mainPanelBackgroundView;

@property ( nonatomic, assign ) IBOutlet OMCBasicStyleCalculation* _basicStyleCalculation;
@property ( nonatomic, assign ) IBOutlet OMCScientificStyleCalculation* _scientificStyleCalculation;
@property ( nonatomic, assign ) IBOutlet OMCProgrammerStyleCalculation* _programmerStyleCalculation;

@property ( nonatomic, assign ) IBOutlet OMCCalWithBasicStyle* _calWithBasicStyle;
@property ( nonatomic, assign ) IBOutlet OMCCalWithScientificStyle* _calWithScientificStyle;
@property ( nonatomic, assign ) IBOutlet OMCCalWithProgrammerStyle* _calWithProgrammerStyle;

@property ( nonatomic, assign, readonly ) OMCSpaceBarRect bottommostSpaceBar;
@property ( nonatomic, assign, readonly ) OMCSpaceBarRect secondSpaceBar;
@property ( nonatomic, assign, readonly ) OMCSpaceBarRect thirdSpaceBar;
@property ( nonatomic, assign, readonly ) OMCSpaceBarRect topmostSpaceBar;
@property ( nonatomic, assign, readonly ) OMCSpaceBarRect statusSpaceBar;

@property ( nonatomic, retain ) NSColor* gridColor;
@property ( nonatomic, retain ) NSColor* auxiliaryLineColor;
@property ( nonatomic, retain ) NSColor* operandsColor;
@property ( nonatomic, retain ) NSColor* operatorsColor;
@property ( nonatomic, retain ) NSColor* storageFormulasColor;
@property ( nonatomic, retain ) NSColor* statusColor;

@property ( nonatomic, retain ) NSFont* operandsFont;
@property ( nonatomic, retain ) NSFont* operatorsFont;
@property ( nonatomic, retain ) NSFont* storageFormulasFont;
@property ( nonatomic, retain ) NSFont* statusFont;

@property ( nonatomic, retain ) NSBezierPath* auxiliaryLinePath;
@property ( nonatomic, retain ) NSBezierPath* gridPath;

@property ( nonatomic, assign ) OMCTypingState typingState;
@property ( nonatomic, assign, readonly ) OMCAry currentAry;

@property ( nonatomic, retain ) OMCCalculation* currentCalculation;

@end // OMCLCDScreen

//////////////////////////////////////////////////////////////////////////////

/*****************************************************************************
 **                                                                         **
 **      _________                                      _______             **
 **     |___   ___|                                   / ______ \            **
 **         | |     _______   _______   _______      | /      |_|           **
 **         | |    ||     || ||     || ||     ||     | |    _ __            **
 **         | |    ||     || ||     || ||     ||     | |   |__  \           **
 **         | |    ||     || ||     || ||     ||     | \_ _ __| |  _        **
 **         |_|    ||_____|| ||     || ||_____||      \________/  |_|       **
 **                                           ||                            **
 **                                    ||_____||                            **
 **                                                                         **
 ****************************************************************************/
///:~