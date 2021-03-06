/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoPalette : NSObject {
    UIColor * _alternativeTickColor;
    UIColor * _backgroundColor;
    UIColor * _chronoHandColor;
    UIColor * _dateComplicationColor;
    UIColor * _foregroundColor;
    UIColor * _glyphBackgroundColor;
    UIColor * _glyphColor;
    UIColor * _inlayColor;
    UIColor * _labelColor;
    float  _largeTickValue;
    unsigned int  _paletteColor;
    BOOL  _showsShadows;
    float  _smallTickValue;
    UIColor * _tickColor;
}

@property (nonatomic, readonly) UIColor *alternativeTickColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *chronoHandColor;
@property (nonatomic, readonly) UIColor *dateComplicationColor;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) UIColor *glyphBackgroundColor;
@property (nonatomic, readonly) UIColor *glyphColor;
@property (nonatomic, readonly) UIColor *inlayColor;
@property (nonatomic, readonly) UIColor *labelColor;
@property (nonatomic, readonly) float largeTickValue;
@property (nonatomic, readonly) BOOL showsShadows;
@property (nonatomic, readonly) float smallTickValue;
@property (nonatomic, readonly) UIColor *tickColor;

+ (id)interpolationFromPalette:(id)arg1 toPalette:(id)arg2 fraction:(float)arg3;
+ (id)paletteWithColor:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_initWithColor:(unsigned int)arg1;
- (id)alternativeTickColor;
- (id)backgroundColor;
- (id)chronoHandColor;
- (id)dateComplicationColor;
- (id)foregroundColor;
- (id)glyphBackgroundColor;
- (id)glyphColor;
- (id)inlayColor;
- (id)labelColor;
- (float)largeTickValue;
- (BOOL)showsShadows;
- (float)smallTickValue;
- (id)tickColor;

@end
