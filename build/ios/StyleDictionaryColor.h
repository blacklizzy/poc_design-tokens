
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 21 Apr 2022 11:27:20 GMT


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
