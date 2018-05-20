/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchIntent.h>

@class NSString, SCSearchCellController;

@interface SCSearchGroupSnapReplyIntent : NSObject <SCSearchIntent> {

	NSString* _groupId;
	SCSearchCellController* _cellController;

}

@property (nonatomic,copy,readonly) NSString * groupId;                                   //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic,__weak) SCSearchCellController * cellController;              //@synthesize cellController=_cellController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGroupId:(id)arg1 ;
-(SCSearchCellController *)cellController;
-(void)setCellController:(SCSearchCellController *)arg1 ;
-(NSString *)groupId;
@end
