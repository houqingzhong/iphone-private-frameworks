/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBWiFiErrorAlertItem : SBAlertItem {
	id _delegate;
	NSString* _name;
	int _error;
}
-(id)initWithNetworkName:(id)networkName error:(int)error;
// inherited: -(void)dealloc;
-(void)setDelegate:(id)delegate;
// inherited: -(void)dismiss;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
@end
