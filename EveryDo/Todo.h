//
//  Todo.h
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Todo : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *taskDescription;
@property (nonatomic, assign) int priorityNumber;
@property (nonatomic, assign) BOOL isCompleted;

- (instancetype)initWithTitle:(NSString *)title taskDescription:(NSString *)taskDescription priorityNumber:(int)priorityNumber andIsCompleted:(BOOL)isCompleted;

@end
