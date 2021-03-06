//
//  ICForecast.h
//  IDTMessaging
//
//  Created by Igor Camilo on 18/08/17.
//  Copyright © 2017 Igor Camilo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICForecastItem.h"

@interface ICForecast : NSObject

@property (nonatomic, copy) NSString *dateString;
@property (nonatomic, strong) NSArray<ICForecastItem *> *items;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
