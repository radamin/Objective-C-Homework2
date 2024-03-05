//
//  Rectangle.h
//  Homework2
//
//  Created by Рамазан Даминов on 05.03.2024.
//

#import <Foundation/Foundation.h>
#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Rectangle : Figure

@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;

- (instancetype) initWithWidth: (float) width andHeight: (float) height;

@end

NS_ASSUME_NONNULL_END
