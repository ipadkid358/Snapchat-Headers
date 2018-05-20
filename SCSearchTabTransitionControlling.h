/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSearchTabTransitionControlling <NSObject>
@property (assign,nonatomic,__weak) id<SCSearchTabTransitionControllingDelegate> delegate; 
@required
-(id)gestureRecognizerForTabTransition;
-(void)switchToTabAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
-(CGRect*)viewFrameForTabAtIndex:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2 contentOffset:(CGPoint)arg3;
-(void)setDelegate:(id)arg1;
-(id<SCSearchTabTransitionControllingDelegate>)delegate;

@end

