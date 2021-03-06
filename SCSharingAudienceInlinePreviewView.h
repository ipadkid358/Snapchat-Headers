/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSharingPrefsInlinePreviewView.h>

@class UILabel, SCSharingAudiencePreviewViewModel;

@interface SCSharingAudienceInlinePreviewView : SCSharingPrefsInlinePreviewView {

	UILabel* _mainLabel;
	UILabel* _subtitle;
	SCSharingAudiencePreviewViewModel* _viewModel;

}

@property (nonatomic,retain) SCSharingAudiencePreviewViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithViewModel:(id)arg1 ;
-(SCSharingAudiencePreviewViewModel *)viewModel;
-(void)setViewModel:(SCSharingAudiencePreviewViewModel *)arg1 ;
@end

