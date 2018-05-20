/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UILabel.h>

@protocol SCLinkLabelDelegate;
@class NSMutableDictionary, NSDictionary;

@interface SCLinkLabel : UILabel {

	NSMutableDictionary* _linksDictionary;
	UIEdgeInsets _hitTestEdgeInsets;
	id<SCLinkLabelDelegate> _delegate;
	NSDictionary* _normalAttributes;
	NSDictionary* _boldAttributes;
	NSDictionary* _italicAttributes;
	NSDictionary* _linkAttributes;

}

@property (assign,nonatomic) id<SCLinkLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * normalAttributes;               //@synthesize normalAttributes=_normalAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * boldAttributes;                 //@synthesize boldAttributes=_boldAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * italicAttributes;               //@synthesize italicAttributes=_italicAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * linkAttributes;                 //@synthesize linkAttributes=_linkAttributes - In the implementation block
-(void)setLinkAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)linkAttributes;
-(void)linkfyMarkdownString:(id)arg1 ;
-(void)_applyNormalAttributes:(id)arg1 ;
-(void)_handleTouchAtPoint:(CGPoint)arg1 ;
-(void)linkfyHtmlString:(id)arg1 ;
-(NSDictionary *)normalAttributes;
-(void)setNormalAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)boldAttributes;
-(void)setBoldAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)italicAttributes;
-(void)setItalicAttributes:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<SCLinkLabelDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SCLinkLabelDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
@end
