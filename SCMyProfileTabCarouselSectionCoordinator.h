/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCProfilePageSectionContentCoordinating.h>

@class NSString;

@interface SCMyProfileTabCarouselSectionCoordinator : NSObject <SCProfilePageSectionContentCoordinating>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchContentWithUpdatingBlock:(/*^block*/id)arg1 ;
-(id)_createTriggerCellSectionDescriptor:(id)arg1 isFirstSection:(BOOL)arg2 ;
-(id)_createDismissableSingleTriggerCellSectionDescriptors;
-(id)_createMyFriendsSectionDescriptor;
-(id)_createBitmojiManagementSectionDescriptor;
-(id)_createUsageCarouselSectionDescriptor;
@end

