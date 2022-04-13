
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 13 Apr 2022 08:50:50 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorGrey,
ColorRaphaelBlue,
ColorBrandBeige,
ColorBrandWhite,
ColorColorsTeal,
ColorColorsTealLight
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
