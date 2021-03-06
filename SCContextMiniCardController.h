/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardController.h>
#import <Snapchat/SCContextMiniCardViewCellDelegate.h>

@protocol SCContextContentLoaderProtocol;
@class NSString, UIView, SCContextViewDisplayMode, SCContextMiniCardViewCell, SCContextCardActionExecutor;

@interface SCContextMiniCardController : SCContextCardController <SCContextMiniCardViewCellDelegate> {

	NSString* _primaryText;
	NSString* _subText;
	NSString* _subTextPrompt;
	NSString* _categoryText;
	UIView* _thumbnailView;
	UIView* _subTextImageView;
	UIView* _categoryImageView;
	BOOL _hasThumbnail;
	id<SCContextContentLoaderProtocol> _thumbnailContentLoader;
	id<SCContextContentLoaderProtocol> _subTextImageContentLoader;
	id<SCContextContentLoaderProtocol> _categoryImageContentLoader;
	SCContextViewDisplayMode* _thumbnailDisplayMode;
	SCContextMiniCardViewCell* _view;
	int _displayStyle;
	BOOL _subTextPromptTransitioned;
	SCContextCardActionExecutor* _thumbnailTapAction;

}

@property (nonatomic,retain) SCContextCardActionExecutor * thumbnailTapAction;              //@synthesize thumbnailTapAction=_thumbnailTapAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupView:(BOOL)arg1 ;
-(CGSize)sizeForCell;
-(void)attachCardView:(id)arg1 ;
-(id)cellTypeIdentifier;
-(SCContextCardActionExecutor *)thumbnailTapAction;
-(void)thumbnailWasTapped:(id)arg1 ;
-(void)setThumbnailTapAction:(SCContextCardActionExecutor *)arg1 ;
-(void)animateSubTextPrompt;
-(id)initWithCard:(id)arg1 thumbnailContentLoader:(id)arg2 subTextImageContentLoader:(id)arg3 categoryImageContentLoader:(id)arg4 session:(id)arg5 ;
-(Class)cellClass;
-(void)_loadContent;
@end

