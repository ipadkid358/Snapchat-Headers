/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMediaChatViewModel.h>
#import <Snapchat/SCReportStoryMetadataParamsProvider.h>
#import <Snapchat/SCChatMetadataForwardable.h>

@class SOJUSearchShareStorySnap, NSString;

@interface SCSearchStoryMessageViewModel : SCMediaChatViewModel <SCReportStoryMetadataParamsProvider, SCChatMetadataForwardable> {

	SOJUSearchShareStorySnap* _searchStorySnap;
	NSString* _displayText;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dynamicStoryId; 
@property (nonatomic,copy,readonly) NSString * snapId; 
@property (nonatomic,copy,readonly) NSString * displayText;                 //@synthesize displayText=_displayText - In the implementation block
-(NSString *)snapId;
-(NSString *)dynamicStoryId;
-(id)reusableCellIdentifier;
-(id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(id)sendTaskMetadataContainer;
-(id)forwardPreviewViewModel;
-(BOOL)isReadyToForward;
-(id)forwardButtonString;
-(id)updatedThumbnailViewModel;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3 ;
-(id)_updatedThumbnailViewModel;
-(unsigned long long)reportSnapSource;
-(id)storyMetadataParams;
-(BOOL)_isViewable;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)displayText;
-(CGSize)thumbnailSize;
@end

