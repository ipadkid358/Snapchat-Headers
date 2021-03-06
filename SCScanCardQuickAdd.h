/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScanCardTableViewCell.h>
#import <Snapchat/SCScanCardQuickAddTableViewCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UITableView, UIView, SCScanCardButton, NSString, UILongPressGestureRecognizer, SCUserSession;

@interface SCScanCardQuickAdd : SCScanCardTableViewCell <SCScanCardQuickAddTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {

	NSArray* _suggestions;
	UITableView* _suggestionsTableView;
	UIView* _headerLabel;
	UIView* _headerSeparator;
	SCScanCardButton* _expandButton;
	BOOL _viewSetup;
	BOOL _shouldShowMore;
	NSString* _scanData;
	double _initialHeight;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	int _version;
	NSString* _scannableId;
	SCUserSession* _userSession;
	BOOL _shouldShowMiniProfile;

}

@property (assign,nonatomic) BOOL shouldShowMiniProfile;              //@synthesize shouldShowMiniProfile=_shouldShowMiniProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionToContentAnimated:(BOOL)arg1 ;
-(void)setShouldShowMiniProfile:(BOOL)arg1 ;
-(BOOL)shouldShowMiniProfile;
-(id)initWithSuggestions:(id)arg1 scanData:(id)arg2 shouldShowProfile:(BOOL)arg3 scannableId:(id)arg4 version:(int)arg5 userSession:(id)arg6 ;
-(void)scanCardQuickAddTableViewCell:(id)arg1 didAddFriend:(id)arg2 ;
-(void)_initGestureRecognizer;
-(void)_showProfileViewOnQuickAddCell:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)_didTapSeeMore;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)updateStyle;
@end

