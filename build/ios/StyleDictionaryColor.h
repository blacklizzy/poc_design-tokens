
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 14 Feb 2022 14:53:52 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorGrey,
ColorRobinGroenholmGreen,
ColorBrandBeige,
ColorBrandWhite,
ColorColorsTeal,
ColorColorsTealLight
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
