//
//  Todo.m
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import "Todo.h"

@implementation Todo

- (instancetype)initWithTitle:(NSString *)title taskDescription:(NSString *)taskDescription priorityNumber:(int)priorityNumber andIsCompleted:(BOOL)isCompleted
{
    self = [super init];
    if (self) {
        _title = title;
        _taskDescription = taskDescription;
        _priorityNumber = priorityNumber;
        _isCompleted = isCompleted;
    }
    return self;
}

@end
