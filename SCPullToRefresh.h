/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPullToRefreshDelegate;
@class NSArray;

@interface SCPullToRefresh : NSObject {

	NSArray* _items;
	long long _state;
	double _triggerOffset;
	double _shookOffset;
	id<SCPullToRefreshDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCPullToRefreshDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) long long state;                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double triggerOffset;                                     //@synthesize triggerOffset=_triggerOffset - In the implementation block
@property (assign,nonatomic) double shookOffset;                                       //@synthesize shookOffset=_shookOffset - In the implementation block
@property (nonatomic,readonly) double defaultItemHeight; 
+(id)defaultPullToRefresh;
+(id)loadingSpinnerPullToRefresh;
-(id)initWithPullToRefreshItems:(id)arg1 ;
-(double)shookOffset;
-(void)setTriggerOffset:(double)arg1 ;
-(void)setShookOffset:(double)arg1 ;
-(double)triggerOffset;
-(void)pullingOffsetDidChange:(double)arg1 isTracking:(BOOL)arg2 ;
-(double)defaultItemHeight;
-(id)itemForItemType:(long long)arg1 ;
-(void)setDelegate:(id<SCPullToRefreshDelegate>)arg1 ;
-(id<SCPullToRefreshDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSArray *)items;
-(void)beginRefreshing;
-(void)endRefreshing;
@end

