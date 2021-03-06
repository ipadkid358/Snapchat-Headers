/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBaseItemViewModel.h>

@protocol SCBaseItemViewModel <NSObject>
@required
-(double)contentInterimSpacing;
-(UIEdgeInsets*)topSeparatorInsets;
-(id)topSeparatorColor;
-(UIEdgeInsets*)bottomSeparatorInsets;
-(id)bottomSeparatorColor;
-(UIEdgeInsets*)contentInsets;

@end


@class UIColor, NSString;

@interface SCBaseItemViewModel : NSObject <SCBaseItemViewModel> {

	double _contentInterimSpacing;
	UIColor* _topSeparatorColor;
	UIColor* _bottomSeparatorColor;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _topSeparatorInsets;
	UIEdgeInsets _bottomSeparatorInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                      //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double contentInterimSpacing;                    //@synthesize contentInterimSpacing=_contentInterimSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets topSeparatorInsets;                 //@synthesize topSeparatorInsets=_topSeparatorInsets - In the implementation block
@property (nonatomic,retain) UIColor * topSeparatorColor;                     //@synthesize topSeparatorColor=_topSeparatorColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bottomSeparatorInsets;              //@synthesize bottomSeparatorInsets=_bottomSeparatorInsets - In the implementation block
@property (nonatomic,retain) UIColor * bottomSeparatorColor;                  //@synthesize bottomSeparatorColor=_bottomSeparatorColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentInterimSpacing:(double)arg1 ;
-(void)setTopSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)setTopSeparatorColor:(UIColor *)arg1 ;
-(void)setBottomSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)setBottomSeparatorColor:(UIColor *)arg1 ;
-(double)contentInterimSpacing;
-(UIEdgeInsets)topSeparatorInsets;
-(UIColor *)topSeparatorColor;
-(UIEdgeInsets)bottomSeparatorInsets;
-(UIColor *)bottomSeparatorColor;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

