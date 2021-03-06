/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol SCChatMessageRenderer;
@class NSMutableDictionary, UIView;

@interface SCChatSDKStackableContentCollectionViewCell : UICollectionViewCell {

	BOOL _isUIRendered;
	id<SCChatMessageRenderer> _renderer;
	NSMutableDictionary* _subViewDic;
	UIView* _messageContentView;

}

@property (nonatomic,retain) NSMutableDictionary * subViewDic;                //@synthesize subViewDic=_subViewDic - In the implementation block
@property (assign,nonatomic) BOOL isUIRendered;                               //@synthesize isUIRendered=_isUIRendered - In the implementation block
@property (nonatomic,retain) UIView * messageContentView;                     //@synthesize messageContentView=_messageContentView - In the implementation block
@property (nonatomic,retain) id<SCChatMessageRenderer> renderer;              //@synthesize renderer=_renderer - In the implementation block
-(void)willDisplayCell;
-(NSMutableDictionary *)subViewDic;
-(void)setSubViewDic:(NSMutableDictionary *)arg1 ;
-(void)setMessageContentView:(UIView *)arg1 ;
-(UIView *)messageContentView;
-(void)setIsUIRendered:(BOOL)arg1 ;
-(void)didEndDisplayingCell;
-(BOOL)isUIRendered;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id<SCChatMessageRenderer>)renderer;
-(void)setRenderer:(id<SCChatMessageRenderer>)arg1 ;
@end

