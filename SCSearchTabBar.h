/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIView;


@protocol SCSearchTabBar <NSObject>
@property (assign,nonatomic,__weak) id<SCSearchTabBarDelegate> tabBarDelegate; 
@property (nonatomic,copy) NSArray * tabBarItems; 
@property (assign,nonatomic) double selectedIndexWithOffsetRatio; 
@property (assign,nonatomic) long long interfaceStyle; 
@property (nonatomic,retain) UIView * actionButton; 
@required
-(void)setSelectedIndexWithOffsetRatio:(double)arg1;
-(void)setTabBarDelegate:(id)arg1;
-(void)setSelectedIndexWithOffsetRatio:(double)arg1 animated:(BOOL)arg2;
-(id<SCSearchTabBarDelegate>)tabBarDelegate;
-(double)selectedIndexWithOffsetRatio;
-(long long)interfaceStyle;
-(void)setInterfaceStyle:(long long)arg1;
-(void)setTabBarItems:(id)arg1;
-(NSArray *)tabBarItems;
-(void)setActionButton:(id)arg1;
-(UIView *)actionButton;

@end

