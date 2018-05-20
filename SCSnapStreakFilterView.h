/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOverlayFilterView.h>

@class UIView, UILabel;

@interface SCSnapStreakFilterView : SCOverlayFilterView {

	UIView* _streakView;
	UILabel* _streakLabel;
	long long _streakCount;

}

@property (assign,nonatomic) long long streakCount;              //@synthesize streakCount=_streakCount - In the implementation block
-(long long)streakCount;
-(id)initWithFrame:(CGRect)arg1 config:(id)arg2 userSession:(id)arg3 ;
-(void)setStreakCount:(long long)arg1 ;
-(id)displayName;
@end

