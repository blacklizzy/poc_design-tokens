
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 18 Mar 2022 09:02:53 GMT


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
