
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 21 Apr 2022 13:35:34 GMT


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
