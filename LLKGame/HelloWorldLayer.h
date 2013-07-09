//
//  HelloWorldLayer.h
//  LLKGame
//
//  Created by panda zheng on 13-7-9.
//  Copyright __MyCompanyName__ 2013年. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    CGPoint prePoint;
    NSInteger countCleared;
    NSMutableArray *arrayMap;
    NSInteger counter;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end

@interface MapNode : NSObject

@property (readwrite,nonatomic) NSInteger order;
@property (readwrite,nonatomic) NSInteger imgid;

@end
