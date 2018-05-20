/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewCell.h>
#import <Snapchat/SCSearchRequestAddressBookAccessViewDelegate.h>
#import <Snapchat/SCSearchActionable.h>

@protocol SCSearchActionHandling;
@class SCSearchRequestAddressBookAccessView, NSString;

@interface SCSearchContactsSyncCell : SCSearchCollectionViewCell <SCSearchRequestAddressBookAccessViewDelegate, SCSearchActionable> {

	SCSearchRequestAddressBookAccessView* _requestAccessView;
	id<SCSearchActionHandling> _actionHandler;

}

@property (assign,nonatomic,__weak) id<SCSearchContactsSyncCellDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                          //@synthesize actionHandler=_actionHandler - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(BOOL)searchCollectionViewCellShouldChangeBackgroundColorOnHighlight;
-(void)addContactsButtonClicked:(BOOL)arg1 skipPhoneVerification:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end
