/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMiniProfileOptionRowController.h>
#import <Snapchat/SCMiniProfileChatOptionsCollectionViewCellDelegate.h>

@protocol SCMiniProfileChatOptionsRowControllerDelegate;
@class NSString;

@interface SCMiniProfileChatOptionsRowController : SCMiniProfileOptionRowController <SCMiniProfileChatOptionsCollectionViewCellDelegate> {

	id<SCMiniProfileChatOptionsRowControllerDelegate> _rowDelegate;
	unsigned long long _rowType;

}

@property (assign,nonatomic) unsigned long long rowType;                                                        //@synthesize rowType=_rowType - In the implementation block
@property (assign,nonatomic,__weak) id<SCMiniProfileChatOptionsRowControllerDelegate> rowDelegate;              //@synthesize rowDelegate=_rowDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willDisplayCell:(id)arg1 ;
-(void)didSelectCell;
-(unsigned long long)numberOfItemsInChatOptionsCollectionViewCell:(id)arg1 ;
-(unsigned long long)cellTypeForChatOptionsCollectionViewCell:(id)arg1 ;
-(long long)optionForCellAtIndexPath:(id)arg1 ;
-(void)chatOptionsCollectionViewCell:(id)arg1 didSelectChatOption:(long long)arg2 ;
-(id<SCMiniProfileChatOptionsRowControllerDelegate>)rowDelegate;
-(id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setRowDelegate:(id<SCMiniProfileChatOptionsRowControllerDelegate>)arg1 ;
-(void)setRowType:(unsigned long long)arg1 ;
-(Class)cellClass;
-(unsigned long long)rowType;
-(double)cellHeight;
@end

