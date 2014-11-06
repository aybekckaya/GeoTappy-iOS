//
//  CustomCell.h
//  GeoTappy
//
//  Created by Dylan Marriott on 12/10/14.
//  Copyright (c) 2014 Dylan Marriott. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Favourite;

@interface CustomCell : UITableViewCell

- (instancetype)initWithName:(NSString *)name favourite:(id<Favourite>)favourite;

@end