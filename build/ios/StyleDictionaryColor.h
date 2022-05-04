
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 04 May 2022 12:49:20 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorGrey,
ColorRaphaelBlue,
ColorBrandBeige,
ColorBrandWhite,
ColorColorsHejsan,
ColorColorsTealLight
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
